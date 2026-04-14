@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (unsigned long long)dataType;
- (id)members;
- (id)formattedDescription:(unsigned long long)a0;
- (id)memberByName:(id)a0;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;

@end
