@class NSString, NSObject;
@protocol OS_os_log;

@interface BKOSLogTranscriptTarget : NSObject <BKTranscriptTarget> {
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)writeString:(id)a0;
- (id)initWithOSLog:(id)a0;

@end
