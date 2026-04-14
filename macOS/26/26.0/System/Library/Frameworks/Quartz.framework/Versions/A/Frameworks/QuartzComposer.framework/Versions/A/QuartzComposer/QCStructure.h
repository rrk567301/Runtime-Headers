@class GFList;

@interface QCStructure : QCObject <NSCoding> {
    GFList *_list;
    void *_unused2[4];
}

- (id)keyAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)arrayRepresentation;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMembers:(id)a0;
- (id)initWithArray:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)_list;
- (void)_setList:(id)a0;
- (void)addMember:(id)a0 forKey:(id)a1;
- (id)arrayRepresentationOfType:(int)a0;
- (id)descriptionWithDepth:(unsigned long long)a0;
- (id)dictionaryAndArrayRepresentation;
- (id)initWithMembers:(const id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
- (id)initWithMembers:(id)a0 keyPrefix:(id)a1;
- (id)initWithMembersAndKeys:(id)a0;
- (id)initWithStructure:(id)a0;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (id)memberAtIndex:(unsigned long long)a0;
- (id)memberForKey:(id)a0;
- (void)removeAllMembers;
- (void)removeMemberAtIndex:(unsigned long long)a0;
- (void)removeMemberForKey:(id)a0;
- (void)replaceMemberAtIndex:(unsigned long long)a0 withMember:(id)a1;
- (void)setMember:(id)a0 forKey:(id)a1;

@end
