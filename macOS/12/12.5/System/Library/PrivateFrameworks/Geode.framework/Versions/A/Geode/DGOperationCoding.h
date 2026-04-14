@interface DGOperationCoding : NSObject

+ (id)replaceObjectRepresentationsInArray:(id)a0;
+ (id)dictionaryRepresentationForNSColor:(id)a0;
+ (id)replaceDictionaryRepresentationsInArray:(id)a0 withInstancesOfClass:(Class)a1;
+ (id)dictionaryRepresentationForPoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })pointFromDictionaryRepresentation:(id)a0;
+ (id)colorFromDictionaryRepresentation:(id)a0;

- (id)init;

@end
