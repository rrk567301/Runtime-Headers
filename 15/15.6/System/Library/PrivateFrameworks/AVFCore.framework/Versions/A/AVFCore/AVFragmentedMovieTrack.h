@class AVFragmentedMovieTrackInternal;

@interface AVFragmentedMovieTrack : AVMovieTrack {
    AVFragmentedMovieTrackInternal *_fragmentedMovieTrack;
}

+ (char)expectsPropertyRevisedNotifications;

- (void).cxx_destruct;

@end
