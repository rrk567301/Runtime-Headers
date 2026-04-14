@class NSColor, NSMapTable;

@interface _NSStateMarker : NSBindingSelectionMarker <NSCopying> {
    short _type;
    NSMapTable *_placeholderRegistry;
    NSMapTable *_cachedPlaceholderRegistry;
    NSColor *_textColor;
    unsigned long long _placeholderBindingsMask;
}

- (unsigned long long)_hash;
- (id)retain;
- (id)valueForKey:(id)a0;
- (id)initWithType:(long long)a0;
- (id)defaultTextColor;
- (short)_type;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copy;
- (id)description;
- (oneway void)release;
- (void)dealloc;
- (id)defaultPlaceholderForBinding:(id)a0 onObjectClass:(Class)a1;
- (void)setDefaultPlaceholder:(id)a0 forBinding:(id)a1 onObjectClass:(Class)a2;
- (void)setDefaultTextColor:(id)a0;

@end
