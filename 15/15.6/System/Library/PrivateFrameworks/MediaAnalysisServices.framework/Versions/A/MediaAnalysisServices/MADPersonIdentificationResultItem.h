@class NSString;

@interface MADPersonIdentificationResultItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *mdID;
@property (readonly, nonatomic) NSString *personIdentifier;
@property (readonly, nonatomic) NSString *personName;
@property (readonly, nonatomic) char verified;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) float confidence;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonIdentifier:(id)a0 personName:(id)a1 mdID:(id)a2 verified:(char)a3 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 andConfidence:(float)a5;

@end
