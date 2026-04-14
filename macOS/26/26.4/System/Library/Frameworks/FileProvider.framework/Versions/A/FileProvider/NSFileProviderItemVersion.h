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

- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4;
- (id)etagHash;
- (BOOL)isEmpty;
- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4 conflictResolved:(BOOL)a5;
- (id)versionRewritingBeforeFirstSync;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1 lastEditorDeviceName:(id)a2;
- (unsigned long long)hash;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
