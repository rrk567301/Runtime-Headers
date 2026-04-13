@class NSNumber, NSString, NSMutableDictionary;

@interface ICCommand : NSObject

@property (copy) NSNumber *transactionID;
@property (copy) NSString *type;
@property (retain) NSMutableDictionary *dict;
@property (retain) id delegate;
@property double timeSent;
@property double timeCompleted;

- (void)dealloc;

@end
