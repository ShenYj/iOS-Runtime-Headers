/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIInstallOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowLocalProvisioned;
    bool  _developerInstall;
    NSData * _geoJSONData;
    NSData * _iTunesArtworkData;
    MIStoreMetadata * _iTunesMetadata;
    bool  _installForMigrator;
    unsigned long long  _installTargetType;
    unsigned long long  _lsInstallType;
    bool  _performAPFSClone;
    NSData * _sinfData;
    bool  _skipBlacklist;
    bool  _skipWatchAppInstall;
    bool  _systemAppInstall;
    bool  _userInitiated;
}

@property (nonatomic) bool allowLocalProvisioned;
@property (getter=isDeveloperInstall, nonatomic) bool developerInstall;
@property (nonatomic, copy) NSData *geoJSONData;
@property (nonatomic, copy) NSData *iTunesArtworkData;
@property (nonatomic, copy) MIStoreMetadata *iTunesMetadata;
@property (nonatomic) bool installForMigrator;
@property (nonatomic) unsigned long long installTargetType;
@property (nonatomic, readonly, copy) NSDictionary *legacyOptionsDictionary;
@property (nonatomic) unsigned long long lsInstallType;
@property (nonatomic) bool performAPFSClone;
@property (nonatomic, copy) NSData *sinfData;
@property (nonatomic) bool skipBlacklist;
@property (nonatomic) bool skipWatchAppInstall;
@property (getter=isSystemAppInstall, nonatomic) bool systemAppInstall;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowLocalProvisioned;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoJSONData;
- (id)iTunesArtworkData;
- (id)iTunesMetadata;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyOptionsDictionary:(id)arg1;
- (bool)installForMigrator;
- (unsigned long long)installTargetType;
- (bool)isDeveloperInstall;
- (bool)isEqual:(id)arg1;
- (bool)isSystemAppInstall;
- (bool)isUserInitiated;
- (id)legacyOptionsDictionary;
- (unsigned long long)lsInstallType;
- (bool)performAPFSClone;
- (void)setAllowLocalProvisioned:(bool)arg1;
- (void)setDeveloperInstall:(bool)arg1;
- (void)setGeoJSONData:(id)arg1;
- (void)setITunesArtworkData:(id)arg1;
- (void)setITunesMetadata:(id)arg1;
- (void)setInstallForMigrator:(bool)arg1;
- (void)setInstallTargetType:(unsigned long long)arg1;
- (void)setLsInstallType:(unsigned long long)arg1;
- (void)setPerformAPFSClone:(bool)arg1;
- (void)setSinfData:(id)arg1;
- (void)setSkipBlacklist:(bool)arg1;
- (void)setSkipWatchAppInstall:(bool)arg1;
- (void)setSystemAppInstall:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (id)sinfData;
- (bool)skipBlacklist;
- (bool)skipWatchAppInstall;

@end