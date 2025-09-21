@interface IEPatternizer : NSObject

- (char)generateCATs:(id)a0 noOverwrite:(char)a1 deleteText:(char)a2 userParamTypes:(id)a3;
- (char)generatePatterns:(id)a0 noOverwrite:(char)a1 deleteText:(char)a2 userParamTypes:(id)a3;
- (char)updateCATMetadata:(id)a0 withMeta:(id)a1;

@end
