@class NSString;

@interface _REMChangeTrackingClientID : NSObject <REMChangeTrackingClientIdentifying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientName:(id)a0 accountIdentifier:(id)a1;

@end
