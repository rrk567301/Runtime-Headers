@class PLGraphNode, NSString, NSManagedObject, NSDate;
@protocol PLGraphContainsValues;

@interface PLGraphNodeValue : PLManagedObject <PLGraphValue>

@property (retain, nonatomic) PLGraphNode *node;
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
+ (void)_debug_assertAllValuesAreOfType:(id)a0 inCollection:(id)a1;
+ (id)fetchGraphNodeValuesWithCode:(int)a0 andValues:(id)a1 forValueType:(id)a2 inContext:(id)a3 prefetchNode:(BOOL)a4;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;

@end
