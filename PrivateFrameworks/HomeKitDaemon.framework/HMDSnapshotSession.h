/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotSession : HMFObject <HMFLogging> {
    HMDCameraSessionID * _sessionID;
    NSMutableArray * _sessionMessages;
    HMDSnapshotCompletionTimer * _snapshotCompletionTimer;
    <HMDCameraGetSnapshotProtocol> * _snapshotGetter;
    HMDCameraSnapshotMetrics * _snapshotMetrics;
    unsigned long long  _streamingTierType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, readonly) NSMutableArray *sessionMessages;
@property (nonatomic, retain) HMDSnapshotCompletionTimer *snapshotCompletionTimer;
@property (nonatomic, readonly) <HMDCameraGetSnapshotProtocol> *snapshotGetter;
@property (nonatomic, readonly) HMDCameraSnapshotMetrics *snapshotMetrics;
@property (nonatomic, readonly) unsigned long long streamingTierType;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 streamingTierType:(unsigned long long)arg6 cameraLocallyReachable:(bool)arg7 snapshotForNotification:(bool)arg8;
- (id)logIdentifier;
- (void)respond:(id)arg1 payload:(id)arg2;
- (id)sessionID;
- (id)sessionMessages;
- (void)setSnapshotCompletionTimer:(id)arg1;
- (id)snapshotCompletionTimer;
- (id)snapshotGetter;
- (id)snapshotMetrics;
- (unsigned long long)streamingTierType;

@end