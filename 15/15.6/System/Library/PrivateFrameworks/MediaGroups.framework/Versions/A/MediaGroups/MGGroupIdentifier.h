@class NSString, NSURLComponents;

@interface MGGroupIdentifier : NSObject <NSSecureCoding, MGGroupIdentifierProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *normalized;
@property (readonly, copy, nonatomic) NSURLComponents *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupIdentifierWithUUID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURLComponents:(id)a0;

@end
