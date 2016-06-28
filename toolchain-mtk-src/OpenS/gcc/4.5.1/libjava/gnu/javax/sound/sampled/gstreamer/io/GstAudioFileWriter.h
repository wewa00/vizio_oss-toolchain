
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_sound_sampled_gstreamer_io_GstAudioFileWriter__
#define __gnu_javax_sound_sampled_gstreamer_io_GstAudioFileWriter__

#pragma interface

#include <javax/sound/sampled/spi/AudioFileWriter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace sound
      {
        namespace sampled
        {
          namespace gstreamer
          {
            namespace io
            {
                class GstAudioFileWriter;
            }
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class AudioFileFormat$Type;
          class AudioInputStream;
      }
    }
  }
}

class gnu::javax::sound::sampled::gstreamer::io::GstAudioFileWriter : public ::javax::sound::sampled::spi::AudioFileWriter
{

public:
  GstAudioFileWriter();
  virtual JArray< ::javax::sound::sampled::AudioFileFormat$Type * > * getAudioFileTypes();
  virtual JArray< ::javax::sound::sampled::AudioFileFormat$Type * > * getAudioFileTypes(::javax::sound::sampled::AudioInputStream *);
  virtual jint write(::javax::sound::sampled::AudioInputStream *, ::javax::sound::sampled::AudioFileFormat$Type *, ::java::io::File *);
  virtual jint write(::javax::sound::sampled::AudioInputStream *, ::javax::sound::sampled::AudioFileFormat$Type *, ::java::io::OutputStream *);
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_sound_sampled_gstreamer_io_GstAudioFileWriter__