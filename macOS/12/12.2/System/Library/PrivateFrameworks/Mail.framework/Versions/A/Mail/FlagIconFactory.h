@interface FlagIconFactory : NSObject

+ (id)_iconForFlag:(char)a0 tint:(BOOL)a1 imageScale:(long long)a2 accessibilityDescription:(id)a3;
+ (id)displayNameForFlag:(char)a0;
+ (id)_accessibilityDescriptionForFlag:(char)a0;
+ (id)colorForFlag:(char)a0;
+ (char)colorForKey:(id)a0;
+ (id)iconForFlag:(char)a0;
+ (char)flagColorForIndex:(unsigned long long)a0;
+ (unsigned long long)indexForColor:(char)a0;
+ (id)iconForFlag:(char)a0 accessibilityDescription:(id)a1;
+ (id)iconForFlag:(char)a0 tint:(BOOL)a1 imageScale:(long long)a2;

- (id)valueForKey:(id)a0;

@end
