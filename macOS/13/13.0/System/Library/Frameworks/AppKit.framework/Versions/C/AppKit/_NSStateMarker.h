@class NSColor, NSMapTable;

@interface _NSStateMarker : NSBindingSelectionMarker <NSCopying> {
    short _type;
    NSMapTable *_placeholderRegistry;
    NSMapTable *_cachedPlaceholderRegistry;
    NSColor *_textColor;
    unsigned long long _placeholderBindingsMask;
}

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copy;
- (id)description;
- (id)valueForKey:(id)a0;
- (short)_type;
- (unsigned long long)_hash;
- (id)initWithType:(long long)a0;
- (void)setDefaultTextColor:(id)a0;
- (id)defaultTextColor;
- (void)setDefaultPlaceholder:(id)a0 forBinding:(id)a1 onObjectClass:(Class)a2;
- (id)defaultPlaceholderForBinding:(id)a0 onObjectClass:(Class)a1;

@end
