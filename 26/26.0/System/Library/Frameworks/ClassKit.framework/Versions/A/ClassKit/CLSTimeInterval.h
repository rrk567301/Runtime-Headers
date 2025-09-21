@class NSString, NSDate;

@interface CLSTimeInterval : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) double length;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
