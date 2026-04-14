@class NSString, NSManagedObject, NSDate, PLGraphEdge;
@protocol PLGraphContainsValues;

@interface PLGraphEdgeValue : PLManagedObject <PLGraphValue>

@property (retain, nonatomic) PLGraphEdge *edge;
@property (readonly, nonatomic) NSManagedObject<PLGraphContainsValues> *owningObject;
@property (nonatomic) int nameCode;
@property (nonatomic) long long integerValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) double doubleValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL valueDidChange;
@property (readonly, nonatomic) BOOL isInsertedDeletedOrChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;

@end
