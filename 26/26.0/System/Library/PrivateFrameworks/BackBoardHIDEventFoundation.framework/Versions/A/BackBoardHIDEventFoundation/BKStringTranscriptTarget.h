@class NSString, NSMutableString;

@interface BKStringTranscriptTarget : NSObject <BKTranscriptTarget> {
    NSMutableString *_string;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
