@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (id)members;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)init;
- (id)memberByName:(id)a0;
- (id)description;
- (void)dealloc;

@end
