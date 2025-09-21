@class NSString, IPAAdjustmentVersion, NSDictionary;

@interface IPAAdjustment : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) IPAAdjustmentVersion *version;
@property (retain, nonatomic) NSDictionary *settings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToAdjustment:(id)a0;
- (id)_debugDescriptionSuffix;

@end
