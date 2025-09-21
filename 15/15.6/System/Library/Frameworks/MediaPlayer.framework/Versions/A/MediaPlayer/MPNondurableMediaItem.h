@interface MPNondurableMediaItem : MPMediaItem {
    unsigned long long _persistentID;
}

+ (char)supportsSecureCoding;
+ (char)canFilterByProperty:(id)a0;
+ (id)defaultPropertyValues;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)a0;
- (id)mediaLibrary;
- (char)existsInLibrary;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPersistentID:(unsigned long long)a0;
- (char)isUsableAsRepresentativeItem;
- (id)valuesForProperties:(id)a0;

@end
