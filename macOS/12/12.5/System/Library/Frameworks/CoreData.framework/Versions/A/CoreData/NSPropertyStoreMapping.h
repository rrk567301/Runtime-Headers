@class NSPropertyDescription;

@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription *_property;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)property;
- (id)initWithProperty:(id)a0;

@end
