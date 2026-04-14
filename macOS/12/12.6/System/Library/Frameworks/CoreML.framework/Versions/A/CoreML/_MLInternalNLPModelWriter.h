@interface _MLInternalNLPModelWriter : NSObject

+ (BOOL)saveCustomWordTaggingModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;
+ (BOOL)saveCustomSentenceClassifierModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;
+ (BOOL)saveCustomSequenceModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;
+ (BOOL)saveCustomSentenceModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;

@end
