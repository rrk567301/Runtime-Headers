@interface MIBUPMUHelper : NSObject

+ (BOOL)readBTFWOKFlag:(id *)a0;
+ (unsigned int)_findServicePmuPrimary;
+ (BOOL)enableLPMFlag;
+ (BOOL)readLPMFlag:(id *)a0;
+ (BOOL)wakedUpFromLPMSU;

@end
