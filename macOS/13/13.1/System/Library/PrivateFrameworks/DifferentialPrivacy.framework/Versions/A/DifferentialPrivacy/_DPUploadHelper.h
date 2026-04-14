@interface _DPUploadHelper : NSObject

+ (id)writeFileForDA:(id)a0;
+ (id)writeFileForEN:(id)a0;
+ (id)writeFileForParsec:(id)a0 inDirectory:(id)a1;
+ (id)writeFileForParsec:(id)a0;
+ (id)writeDediscoSubmission:(id)a0 toFileInDirectory:(id)a1;
+ (id)writeFileForDedisco:(id)a0;
+ (id)submissionFilePathInDirectory:(id)a0 uploadName:(id)a1 forDate:(id)a2 useGMT:(BOOL)a3 suffix:(id)a4;

@end
