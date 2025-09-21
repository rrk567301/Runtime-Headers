@class NSNumber, NSString;

@interface HKConceptIdentifier : NSObject <NSObject, NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) HKConceptIdentifier *inMemoryConceptIdentifier;
@property (class, readonly, copy, nonatomic) HKConceptIdentifier *root;
@property (class, readonly, copy, nonatomic) HKConceptIdentifier *medication;
@property (class, readonly, copy, nonatomic) HKConceptIdentifier *diastolicBloodPressure;
@property (class, readonly, copy, nonatomic) HKConceptIdentifier *systolicBloodPressure;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isAdHoc;
@property (readonly, nonatomic) long long rawIdentifier;
@property (readonly, copy, nonatomic) NSNumber *numberRepresentation;
@property (readonly, nonatomic) char isInMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithNumber:(id)a0;
+ (id)identifierWithRawIdentifier:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRawIdentifier:(long long)a0;

@end
