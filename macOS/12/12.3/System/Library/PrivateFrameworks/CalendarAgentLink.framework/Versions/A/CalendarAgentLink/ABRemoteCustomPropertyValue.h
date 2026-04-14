@class ABRemoteCustomProperty, NSString, NSData, NSDate, NSNumber;

@interface ABRemoteCustomPropertyValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ABRemoteCustomProperty *customProperty;
@property (retain) NSData *dataValue;
@property (retain) NSDate *dateValue;
@property (retain) NSNumber *numberValue;
@property (copy) NSString *stringValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
