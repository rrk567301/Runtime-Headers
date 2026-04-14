@class NSString, NSObject;
@protocol OS_os_log;

@interface BKOSLogTranscriptTarget : NSObject <BKTranscriptTarget> {
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeString:(id)a0;
- (void).cxx_destruct;
- (id)initWithOSLog:(id)a0;

@end
