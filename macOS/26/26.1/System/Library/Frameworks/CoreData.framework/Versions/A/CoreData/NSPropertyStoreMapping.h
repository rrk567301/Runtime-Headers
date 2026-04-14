@class NSPropertyDescription;

@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription *_property;
}

- (id)property;
- (id)initWithProperty:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
