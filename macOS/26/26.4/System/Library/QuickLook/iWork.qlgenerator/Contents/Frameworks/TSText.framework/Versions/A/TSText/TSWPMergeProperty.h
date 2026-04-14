@class NSString, TSWPMergeFieldType;

@interface TSWPMergeProperty : NSObject <NSCopying>

@property (readonly, nonatomic) TSWPMergeFieldType *mergeFieldType;
@property (readonly, nonatomic) NSString *stringValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMergeFieldType:(id)a0 stringValue:(id)a1;

@end
