@class NSData, NSArray, NSString;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>

@property (class, readonly) NSData *beforeFirstSyncComponent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *equivalentContentVersions;
@property (readonly, copy, nonatomic) NSArray *equivalentMetadataVersions;
@property (readonly, copy) NSString *lastEditorDeviceName;
@property BOOL conflictResolved;
@property (readonly, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) NSData *metadataVersion;

- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1 lastEditorDeviceName:(id)a2;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)etagHash;
- (id)description;
- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4;
- (id)initWithCoder:(id)a0;
- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4 conflictResolved:(BOOL)a5;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)versionRewritingBeforeFirstSync;
- (void).cxx_destruct;

@end
