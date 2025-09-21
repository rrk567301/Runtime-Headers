@class NSString;

@interface NLPModelTrainingDelegate : NSObject <NLModelTrainerDelegate> {
    id /* block */ _logHandler;
    char _stop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
