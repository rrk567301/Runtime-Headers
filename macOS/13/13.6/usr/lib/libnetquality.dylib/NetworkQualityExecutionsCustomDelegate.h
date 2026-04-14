@interface NetworkQualityExecutionsCustomDelegate : NSObject <NetworkQualityExecutionsDelegate> {
    id /* block */ _responsivenessHandler;
    BOOL _reported;
}

- (void).cxx_destruct;
- (void)progress:(id)a0;
- (id)initWithResponsivenessHandler:(id /* block */)a0;

@end
