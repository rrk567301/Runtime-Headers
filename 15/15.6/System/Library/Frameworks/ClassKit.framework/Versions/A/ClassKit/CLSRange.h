@class NSString;

@interface CLSRange : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (readonly, nonatomic) double delta;
@property (readonly, nonatomic) NSString *parentObjectID;

+ (char)supportsSecureCoding;
+ (id)compressOverlappingRanges:(id)a0;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithRange:(id)a0;
- (id)initWithStart:(double)a0 end:(double)a1;
- (char)overlapsWith:(id)a0;
- (void)mergeWithRange:(id)a0;
- (char)validateObject:(id *)a0;

@end
