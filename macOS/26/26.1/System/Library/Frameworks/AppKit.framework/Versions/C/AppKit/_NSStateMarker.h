@class NSColor, NSMapTable;

@interface _NSStateMarker : NSBindingSelectionMarker <NSCopying> {
    short _type;
    NSMapTable *_placeholderRegistry;
    NSMapTable *_cachedPlaceholderRegistry;
    NSColor *_textColor;
    unsigned long long _placeholderBindingsMask;
}

- (short)_type;
- (id)copy;
- (unsigned long long)_hash;
- (id)retain;
- (id)valueForKey:(id)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)defaultTextColor;
- (id)initWithType:(long long)a0;
- (id)description;
- (void)dealloc;
- (id)autorelease;
- (id)defaultPlaceholderForBinding:(id)a0 onObjectClass:(Class)a1;
- (void)setDefaultPlaceholder:(id)a0 forBinding:(id)a1 onObjectClass:(Class)a2;
- (void)setDefaultTextColor:(id)a0;

@end
