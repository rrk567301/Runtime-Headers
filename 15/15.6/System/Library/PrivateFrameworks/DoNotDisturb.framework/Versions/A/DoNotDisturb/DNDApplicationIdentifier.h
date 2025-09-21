@class NSString;

@interface DNDApplicationIdentifier : NSObject <DNDEventSourceIdentifying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;
- (id)diffDescription;
- (id)initWithBundleID:(id)a0 platform:(unsigned long long)a1;

@end
