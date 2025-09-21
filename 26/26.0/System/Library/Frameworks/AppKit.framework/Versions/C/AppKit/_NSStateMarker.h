@class NSColor, NSMapTable;

@interface _NSStateMarker : NSBindingSelectionMarker <NSCopying> {
    short _type;
    NSMapTable *_placeholderRegistry;
    NSMapTable *_cachedPlaceholderRegistry;
    NSColor *_textColor;
    unsigned long long _placeholderBindingsMask;
}

- (short)_type;
- (unsigned long long)_hash;
- (id)autorelease;
- (id)initWithType:(long long)a0;
- (void)dealloc;
- (id)defaultTextColor;
- (id)copy;
- (id)valueForKey:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)description;
- (oneway void)release;
- (id)defaultPlaceholderForBinding:(id)a0 onObjectClass:(Class)a1;
- (void)setDefaultPlaceholder:(id)a0 forBinding:(id)a1 onObjectClass:(Class)a2;
- (void)setDefaultTextColor:(id)a0;

@end
