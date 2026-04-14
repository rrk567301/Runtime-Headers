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

- (BOOL)isEmpty;
- (id)description;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1 lastEditorDeviceName:(id)a2;
- (id)init;
- (id)versionRewritingBeforeFirstSync;
- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4;
- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4 conflictResolved:(BOOL)a5;
- (void).cxx_destruct;
- (id)etagHash;
- (id)initWithCoder:(id)a0;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
