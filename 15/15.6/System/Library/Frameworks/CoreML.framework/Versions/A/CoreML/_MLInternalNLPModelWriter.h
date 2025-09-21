@interface _MLInternalNLPModelWriter : NSObject

+ (char)saveCustomSentenceClassifierModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;
+ (char)saveCustomSentenceModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;
+ (char)saveCustomSequenceModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;
+ (char)saveCustomWordTaggingModelToURL:(id)a0 modelData:(id)a1 stringInputName:(id)a2 classname:(id)a3 NSError:(id *)a4;

@end
