@interface DESJSONPredicate : NSObject

+ (char)isBoolean:(id)a0;
+ (char)isNumber:(id)a0;
+ (char)isDate:(id)a0;
+ (char)isTime:(id)a0;
+ (char)_testStrings:(id)a0 test:(id)a1 caseInsensitive:(char)a2;
+ (char)evaluateAnd:(id)a0 onObj:(id)a1;
+ (char)evaluateArrayOp:(id)a0 onObj:(id)a1;
+ (char)evaluateBoolOp:(id)a0 onObj:(id)a1;
+ (char)evaluateDefOp:(id)a0 onObj:(id)a1;
+ (char)evaluateDict:(id)a0 onObj:(id)a1;
+ (char)evaluateJson:(id)a0 onJson:(id)a1;
+ (char)evaluateNumericOp:(id)a0 onObj:(id)a1;
+ (char)evaluateOr:(id)a0 onObj:(id)a1;
+ (char)evaluatePredicate:(id)a0 onObj:(id)a1;
+ (char)evaluateRegexOp:(id)a0 onObj:(id)a1;
+ (char)evaluateStringOp:(id)a0 onObj:(id)a1;
+ (char)evaluateTypeOp:(id)a0 onObj:(id)a1;
+ (id)fetchObjectAtPath:(id)a0 from:(id)a1;
+ (char)isDateTime:(id)a0;
+ (char)obj:(id)a0 matchesRegex:(id)a1;
+ (id)parseJSON:(id)a0;
+ (id)parsePath:(id)a0;

@end
