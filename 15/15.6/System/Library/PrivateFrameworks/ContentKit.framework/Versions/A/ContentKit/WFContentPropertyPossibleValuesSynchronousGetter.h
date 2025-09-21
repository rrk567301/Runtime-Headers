@class NSString;

@interface WFContentPropertyPossibleValuesSynchronousGetter : NSObject <WFContentPropertyPossibleValuesGetter> {
    id /* block */ _getter;
}

@property (readonly, nonatomic, getter=isAsynchronous) char asynchronous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
