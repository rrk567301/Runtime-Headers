@class NSColor, NSMapTable;

@interface _NSStateMarker : NSBindingSelectionMarker <NSCopying> {
    short _type;
    NSMapTable *_placeholderRegistry;
    NSMapTable *_cachedPlaceholderRegistry;
    NSColor *_textColor;
    unsigned long long _placeholderBindingsMask;
}

- (unsigned long long)_hash;
- (id)autorelease;
- (id)initWithType:(long long)a0;
- (id)valueForKey:(id)a0;
- (id)copy;
- (id)retain;
- (id)description;
- (short)_type;
- (oneway void)release;
- (id)defaultTextColor;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)defaultPlaceholderForBinding:(id)a0 onObjectClass:(Class)a1;
- (void)setDefaultPlaceholder:(id)a0 forBinding:(id)a1 onObjectClass:(Class)a2;
- (void)setDefaultTextColor:(id)a0;

@end
