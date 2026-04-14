@class NSString, MCPeerIDInternal;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {
    MCPeerIDInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *displayName;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)internalDescription;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)pid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0;
- (id)idString;
- (id)displayNameAndPID;
- (id)initWithIDString:(id)a0 displayName:(id)a1;
- (id)initWithPID:(unsigned int)a0 displayName:(id)a1;
- (unsigned long long)pid64;

@end
