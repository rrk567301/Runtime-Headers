@class NSData;

@interface ABRemoteSmartGroup : ABRemoteGroup

@property (retain) NSData *searchElement;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
