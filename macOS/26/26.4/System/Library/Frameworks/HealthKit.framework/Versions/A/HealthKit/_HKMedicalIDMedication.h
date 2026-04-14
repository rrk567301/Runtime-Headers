@class NSString;

@interface _HKMedicalIDMedication : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *textDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToSyncedData:(id)a0;

@end
