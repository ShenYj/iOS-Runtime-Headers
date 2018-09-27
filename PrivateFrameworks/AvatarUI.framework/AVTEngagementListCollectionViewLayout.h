/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTEngagementListCollectionViewLayout : UICollectionViewLayout <AVTCollectionViewLayout> {
    AVTEngagementLayout * _engagementLayout;
    NSValue * _overriddenContentOffset;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collectionViewBounds;
@property (nonatomic, readonly) AVTEngagementLayout *engagementLayout;
@property (nonatomic, retain) NSValue *overriddenContentOffset;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize { double x1; double x2; })arg2 proposedOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (void)clearContentOffsetOverride;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collectionViewBounds;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })contentSizeForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfItems:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })engagementInsetsForCollectionViewBounds:(struct CGSize { double x1; double x2; })arg1;
- (id)engagementLayout;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)indexesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 numberOfItems:(long long)arg3;
- (id)initWithEngagementLayout:(id)arg1;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)overriddenContentOffset;
- (void)overrideContentOffsetWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOverriddenContentOffset:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end