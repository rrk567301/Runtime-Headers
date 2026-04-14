@class NSString, MCPeerIDInternal;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {
    MCPeerIDInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *displayName;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)pid;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (id)initWithDisplayName:(id)a0;
- (id)idString;
- (id)internalDescription;
- (unsigned long long)pid64;
- (id)displayNameAndPID;
- (id)initWithPID:(unsigned int)a0 displayName:(id)a1;
- (id)initWithIDString:(id)a0 displayName:(id)a1;

@end
