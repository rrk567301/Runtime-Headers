@class NSPropertyDescription;

@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription *_property;
}

- (id)initWithProperty:(id)a0;
- (id)property;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;

@end
