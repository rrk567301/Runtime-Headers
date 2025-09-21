@interface ICNFMCSubjectParser : NSObject

+ (char)subjectHasReplyPrefix:(id)a0;
+ (unsigned long long)effectivePrefixLengthForSubject:(id)a0 replyOnly:(char)a1;

@end
