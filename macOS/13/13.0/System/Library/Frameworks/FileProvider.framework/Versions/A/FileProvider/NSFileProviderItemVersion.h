@class NSData, NSString;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>

@property (class, readonly) NSData *beforeFirstSyncComponent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *lastEditorDeviceName;
@property (readonly, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) NSData *metadataVersion;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1 lastEditorDeviceName:(id)a2;
- (id)versionRewritingBeforeFirstSync;

@end
