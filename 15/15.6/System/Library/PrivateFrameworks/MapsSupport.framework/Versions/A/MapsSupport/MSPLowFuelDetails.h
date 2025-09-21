@class NSString, NSNumber, NSData;

@interface MSPLowFuelDetails : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSNumber *engineType;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSData *iconDataCarPlay;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 engineType:(id)a2;

@end
