@interface StreamHelpers : NSObject

+ (id)logger;
+ (id)eventOfType:(Class)a0 jsonDictionary:(id)a1 error:(id *)a2;
+ (id)lookupStream:(id)a0;
+ (id)lookupStreamBase:(id)a0;

@end
