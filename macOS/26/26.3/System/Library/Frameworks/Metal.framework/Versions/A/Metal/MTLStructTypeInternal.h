@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (unsigned long long)dataType;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;
- (id)members;
- (id)description;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (void)dealloc;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)memberByName:(id)a0;

@end
