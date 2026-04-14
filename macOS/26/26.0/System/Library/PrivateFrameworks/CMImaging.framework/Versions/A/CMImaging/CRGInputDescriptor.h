@class NSString;
@protocol CRGROI;

@interface CRGInputDescriptor : NSObject <CRGInputDescriptor>

@property (retain, nonatomic) NSString *inputName;
@property (retain, nonatomic) id<CRGROI> roi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputName:(id)a0 roi:(id)a1;

- (void).cxx_destruct;
- (id)initWithInputName:(id)a0 roi:(id)a1;

@end
