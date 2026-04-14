@class NSString;

@interface _CPXPSNWrapper : NSObject <BSDescriptionStreaming> {
    struct CPSProcessSerNum { unsigned int hi; unsigned int lo; } _psn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
