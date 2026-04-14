@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject {
    NSDictionary *_attributes;
    NSDictionary *_unknownAttributes;
}

- (id)dataForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (BOOL)getInt32:(int *)a0 forKey:(id)a1;
- (id)description;
- (id)UUIDStringForKey:(id)a0;
- (BOOL)getUInt16:(unsigned short *)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)getUInt64:(unsigned long long *)a0 forKey:(id)a1;
- (void)dealloc;
- (id)initWithAttributes:(id)a0 unknownAttributes:(id)a1;

@end
