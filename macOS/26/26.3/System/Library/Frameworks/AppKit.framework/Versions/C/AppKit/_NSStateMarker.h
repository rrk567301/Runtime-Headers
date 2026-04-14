@class NSColor, NSMapTable;

@interface _NSStateMarker : NSBindingSelectionMarker <NSCopying> {
    short _type;
    NSMapTable *_placeholderRegistry;
    NSMapTable *_cachedPlaceholderRegistry;
    NSColor *_textColor;
    unsigned long long _placeholderBindingsMask;
}

- (id)copy;
- (unsigned long long)retainCount;
- (id)initWithType:(long long)a0;
- (id)autorelease;
- (short)_type;
- (id)retain;
- (id)description;
- (id)defaultTextColor;
- (unsigned long long)_hash;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (oneway void)release;
- (id)defaultPlaceholderForBinding:(id)a0 onObjectClass:(Class)a1;
- (void)setDefaultPlaceholder:(id)a0 forBinding:(id)a1 onObjectClass:(Class)a2;
- (void)setDefaultTextColor:(id)a0;

@end
