@class NSString, IPAAdjustmentVersion, NSDictionary;

@interface IPAAdjustment : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) IPAAdjustmentVersion *version;
@property (retain, nonatomic) NSDictionary *settings;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToAdjustment:(id)a0;
- (id)_debugDescriptionSuffix;

@end
